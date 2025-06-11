import { defineConfig } from 'vite'
import { nodeResolve } from '@rollup/plugin-node-resolve'

export default defineConfig({
  plugins: [nodeResolve()],
  server: {
    hmr: false,
    historyApiFallback: true,
    port: 8000,
    watch: {
      ignored: ['**/_opam']
    }
  },
});
