<?php

namespace App\Models\Models;

use Illuminate\Database\Eloquent\Model;

class Product extends Model
{
      // Bảng trong DB
    protected $table = 'Products';

    // Khoá chính
    protected $primaryKey = 'id';

    // Nếu dùng IDENTITY, Laravel mặc định là incrementing = true, type int
    public $incrementing = true;
    protected $keyType = 'int';

    // Nếu bảng KHÔNG có created_at, updated_at
    public $timestamps = false;

    // Các cột được phép fill
    protected $fillable = [
        'product_name',
        'price',
        'description',
    ];
}
   
