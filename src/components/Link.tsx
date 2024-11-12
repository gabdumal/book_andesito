interface LinkProps {
  href: string;
  title: string;
}

export default function Link({ href, title }: LinkProps) {
  return (
    <a href={href} target="_blank" rel="noopener noreferrer">
      {title}
    </a>
  );
}
