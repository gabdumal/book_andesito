use mdbook::config::Config;
use mdbook::MDBook;

fn main() {
    let root_dir = "./book";

    let mut cfg = Config::default();
    cfg.book.title = Some("Ambiente de desenvolvimento em C e C++".to_string());
    cfg.book.authors.push("Gabriel Malosto".to_string());
    cfg.book.description = Some("Guia de configuração de ambiente de desenvolvimento em C e C++, utilizando Clang, LLDB, CMake e VsCode.".to_string());
    cfg.book.language = Some("pt-br".to_string());
    cfg.book.text_direction = Some(mdbook::config::TextDirection::LeftToRight);

    MDBook::init(root_dir)
        .create_gitignore(true)
        .with_config(cfg)
        .build()
        .expect("Book generation failed");
}
