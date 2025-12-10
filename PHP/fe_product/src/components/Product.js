import "./Product.css";

function Product({ product }) {
  return (
    <div className="product">
      <img
        className="product-image"
        src={product.image || "/iphone-17.jpeg"}
        alt={product.product_name}
      />

      <div className="product-content">
        <h2>{product.product_name}</h2>
        <p>Price: ${product.price}</p>
        <p>{product.description}</p>

        <div className="product-actions">
          <button className="btn-outline">Add to Cart</button>
          <button className="btn-primary">Buy Now</button>
        </div>
      </div>
    </div>
  );
}

export default Product;
