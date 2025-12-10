import { useEffect, useState } from "react";
import axios from "axios";
import Product from "./Product";
import "./ProductList.css";

function ProductList() {
  const [products, setProducts] = useState([]);

  useEffect(() => {
    axios
      .get("http://127.0.0.1:8000/api/products")
      .then((response) => {
        setProducts(response.data);
        console.log("Products from API:", response.data);
      })
      .catch((error) => {
        console.error("There was an error fetching the products!", error);
      });
  }, []);

  return (
    <div className="product-list-wrapper">
      <h1 className="product-list-title">Product List</h1>
      <div className="product-list">
        {products.map((p, index) => (
          <Product key={p.id || index} product={p} />
        ))}
      </div>
    </div>
  );
}

export default ProductList;
