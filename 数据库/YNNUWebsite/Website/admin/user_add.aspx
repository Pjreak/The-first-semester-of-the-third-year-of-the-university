﻿<%@ Page Title="添加用户" Language="C#" MasterPageFile="~/admin/admin.Master" AutoEventWireup="true" CodeBehind="user_add.aspx.cs" Inherits="Website.admin.user_add" %>
<asp:Content ID="Content1" ContentPlaceHolderID="head" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" runat="server">
    <table width="100%">
        <tr>
            <td width="150px">用户名：</td>
            <td>
                <asp:TextBox ID="TextBoxusername" runat="server" Width="80%"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td width="150px">密码：</td>
            <td>
                <asp:TextBox ID="TextBoxpassword" runat="server" Width="80%" TextMode="Password"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td width="150px">姓名：</td>
            <td>
                <asp:TextBox ID="TextBoxname" runat="server" Width="50%" ></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td width="150px">性别：</td>
            <td>
                <asp:RadioButtonList ID="RadioButtonListgender" runat="server" RepeatDirection="Horizontal">
                    <asp:ListItem Selected="True">男</asp:ListItem>
                    <asp:ListItem>女</asp:ListItem>
                </asp:RadioButtonList>
            </td>
        </tr>
        <tr>
            <td width="150px">级别：</td>
            <td>
                <asp:DropDownList ID="DropDownListrank" runat="server">
                    <asp:ListItem Value="1">1级</asp:ListItem>
                    <asp:ListItem Value="2">2级</asp:ListItem>
                </asp:DropDownList>
            </td>
        </tr>
    </table>
    <asp:Button ID="ButtonSave" runat="server" Text="保存" OnClick="ButtonSave_Click" />
    <asp:Label ID="LabelAlert" runat="server" Text="" ForeColor="Red"></asp:Label>
</asp:Content>
