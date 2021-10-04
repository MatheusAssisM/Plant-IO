# Planta-IoT

<!---Esses são exemplos. Veja https://shields.io para outras pessoas ou para personalizar este conjunto de escudos. Você pode querer incluir dependências, status do projeto e informações de licença aqui--->

![GitHub repo size](https://img.shields.io/github/repo-size/assisDev/Plant-IOT?style=for-the-badge)
![GitHub language count](https://img.shields.io/github/languages/count/assisDev/Plant-IOT?style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/assisDev/Plant-IOT?style=for-the-badge)
![Bitbucket open issues](https://img.shields.io/bitbucket/issues/assisDev/Plant-IOT?style=for-the-badge)
![Bitbucket open pull requests](https://img.shields.io/bitbucket/pr-raw/assisDev/Plant-IOT?style=for-the-badge)

<img src="https://user-images.githubusercontent.com/71731452/135922766-871c97f0-67c5-46b8-b972-76a32027aeaa.png" alt="exemplo imagem">


> Trata-se de uma API ligada a uma planta que avisa quando precisa de agua.

### Ajustes e melhorias

O projeto ainda está em desenvolvimento e as próximas atualizações serão voltadas nas seguintes tarefas:

- [x] Tweetar frases relacionadas a plantas todas as manhãs.
- [ ] Regressão linear para fazer previsões de quando regar a planta novamente.

## 💻 Pré-requisitos

Antes de começar, verifique se você atendeu aos seguintes requisitos:
<!---Estes são apenas requisitos de exemplo. Adicionar, duplicar ou remover conforme necessário--->
* Você possui `ESP8266 e um Sensor de Umidade do Solo`
* Você instalou a versão mais recente de `Node.js / VSCode / Driver CH340`
* Você tem uma máquina `Windows / Linux / Mac`.

## 🚀 Instalando Planta-IoT

Para instalar o Planta-IoT, siga estas etapas:
 
Monte o circuito abaixo:
  
<img src="https://user-images.githubusercontent.com/71731452/135925449-a17d6983-8189-41a3-a064-a661ccfdb9e1.png" width="812" height="357" alt="esquematico">
 
Abra a pasta arduinoServer utilizando a extensão [PlatformIO](https://platformio.org/install/ide?install=vscode) do VSCode e faça upload do firmware.
 
![ezgif com-gif-maker](https://user-images.githubusercontent.com/71731452/135932280-bd088aac-62ac-4487-b974-5555657336fd.gif)

Agora dentro da pasta twitterAPI execute os comandos:

```
npm install
```

## ☕ Usando Planta-IoT

Para usar Planta-IoT, siga estas etapas:

Com o ESP8266 ligado conecte a rede WiFi de nome "Planta IoT" e informe as credenciais
 
<img src="https://user-images.githubusercontent.com/71731452/135929703-6bf5a1d3-43ae-4a34-a354-234f56ded094.jpg" width="295" height="412" alt="WiFi">  |  <img src="https://user-images.githubusercontent.com/71731452/135929409-0cc3ed30-5943-4edc-b937-78b8c19495e1.jpg" width="295" height="412" alt="WiFi"> |  <img src="https://user-images.githubusercontent.com/71731452/135929922-74966263-9418-4a75-836b-fc6827523bf1.jpg" width="295" height="412" alt="WiFi"> 
 
Dentro da pasta twitterAPI rode o comando:
```
node main.js
```
![ezgif com-gif-maker (2)](https://user-images.githubusercontent.com/71731452/135933836-e5c2c3bf-a0d0-42f4-85b0-dd1362df51f3.gif)

Adicione comandos de execução e exemplos que você acha que os usuários acharão úteis. Fornece uma referência de opções para pontos de bônus!

## 📫 Contribuindo para <nome_do_projeto>
<!---Se o seu README for longo ou se você tiver algum processo ou etapas específicas que deseja que os contribuidores sigam, considere a criação de um arquivo CONTRIBUTING.md separado--->
Para contribuir com <nome_do_projeto>, siga estas etapas:

1. Bifurque este repositório.
2. Crie um branch: `git checkout -b <nome_branch>`.
3. Faça suas alterações e confirme-as: `git commit -m '<mensagem_commit>'`
4. Envie para o branch original: `git push origin <nome_do_projeto> / <local>`
5. Crie a solicitação de pull.

Como alternativa, consulte a documentação do GitHub em [como criar uma solicitação pull](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request).

## 🤝 Colaboradores

Agradecemos às seguintes pessoas que contribuíram para este projeto:

<table>
  <tr>
    <td align="center">
      <a href="#">
        <img src="https://avatars3.githubusercontent.com/u/31936044" width="100px;" alt="Foto do Iuri Silva no GitHub"/><br>
        <sub>
          <b>Iuri Silva</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="#">
        <img src="https://s2.glbimg.com/FUcw2usZfSTL6yCCGj3L3v3SpJ8=/smart/e.glbimg.com/og/ed/f/original/2019/04/25/zuckerberg_podcast.jpg" width="100px;" alt="Foto do Mark Zuckerberg"/><br>
        <sub>
          <b>Mark Zuckerberg</b>
        </sub>
      </a>
    </td>
    <td align="center">
      <a href="#">
        <img src="https://miro.medium.com/max/360/0*1SkS3mSorArvY9kS.jpg" width="100px;" alt="Foto do Steve Jobs"/><br>
        <sub>
          <b>Steve Jobs</b>
        </sub>
      </a>
    </td>
  </tr>
</table>


## 😄 Seja um dos contribuidores<br>

Quer fazer parte desse projeto? Clique [AQUI](CONTRIBUTING.md) e leia como contribuir.

## 📝 Licença

Esse projeto está sob licença. Veja o arquivo [LICENÇA](LICENSE.md) para mais detalhes.

[⬆ Voltar ao topo](#nome-do-projeto)<br>
