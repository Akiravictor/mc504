cmd_crypto/built-in.o :=  ld -m elf_i386   -r -o crypto/built-in.o crypto/crypto.o crypto/crypto_wq.o crypto/crypto_algapi.o crypto/aead.o crypto/crypto_blkcipher.o crypto/crypto_hash.o crypto/akcipher.o crypto/kpp.o crypto/cryptomgr.o crypto/hmac.o crypto/crypto_null.o crypto/sha1_generic.o crypto/aes_generic.o crypto/crc32c_generic.o crypto/rng.o 
