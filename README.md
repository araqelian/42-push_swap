# 🗣 Subject &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;push_swap

<br><br>
<table>
  <tr>
    <td>Program &nbsp;name</td>
    <td>push_swap</td>
  </tr>
  <tr>
    <td>Turn &nbsp;in &nbsp;files</td>
    <td>Makefile, &nbsp;*.h, &nbsp;*.c</td>
  </tr>
  <tr>
    <td>Makefile</td>
    <td>NAME, &nbsp;all, &nbsp;clean,&nbsp; fclean, &nbsp;re</td>
  </tr>
  <tr>
    <td>Arguments</td>
    <td>stack &nbsp;a:&nbsp; A &nbsp;list&nbsp; of &nbsp;integers</td>
  </tr>
  <tr>
    <td>External &nbsp;functs.</td>
    <td>
    <ul>
      <li>read, &nbsp;write,&nbsp; malloc,&nbsp; free, &nbsp;exit
      <li>ft_printf &nbsp;and &nbsp;any&nbsp; equivalent&nbsp; YOU&nbsp; coded
    </ul>
  </td>
  </tr>
  <tr>
    <td>Libft &nbsp;authorized</td>
    <td>Yes</td>
  </tr>
  <tr>
    <td>Description</td>
    <td>Sort&nbsp; stacks</td>
  </tr>
</table>
<br><br>
Your &nbsp;project &nbsp;must &nbsp;comply&nbsp; with &nbsp;the&nbsp; following&nbsp; rules:<br>
<ul>
<li>You&nbsp; have &nbsp;to &nbsp;turn &nbsp;in&nbsp; a&nbsp; Makefile &nbsp;which &nbsp;will &nbsp;compile &nbsp;your &nbsp;source &nbsp;files. &nbsp;It &nbsp;must &nbsp;not&nbsp;
relink.
<li>Global &nbsp;variables &nbsp;are &nbsp;forbidden.
<li>You &nbsp;have &nbsp;to &nbsp;write&nbsp; a&nbsp; program &nbsp;named &nbsp;push_swap&nbsp; that &nbsp;takes &nbsp;as &nbsp;an &nbsp;argument &nbsp;the &nbsp;stack&nbsp;
a &nbsp;formatted &nbsp;as &nbsp;a &nbsp;list &nbsp;of &nbsp;integers.&nbsp; The &nbsp;first&nbsp; argument &nbsp;should &nbsp;be &nbsp;at &nbsp;the &nbsp;top&nbsp; of &nbsp;the&nbsp;
stack&nbsp; (be &nbsp;careful&nbsp; about &nbsp;the &nbsp;order).
<li>The&nbsp; program &nbsp;must &nbsp;display &nbsp;the&nbsp; smallest&nbsp; list&nbsp; of&nbsp; instructions &nbsp;possible&nbsp; to&nbsp; sort&nbsp; the &nbsp;stack&nbsp;
a, &nbsp;the &nbsp;smallest &nbsp;number &nbsp;being&nbsp; at&nbsp; the&nbsp; top.
<li>Instructions &nbsp;must&nbsp; be &nbsp;separated &nbsp;by &nbsp;a &nbsp;’\n’ &nbsp;and &nbsp;nothing &nbsp;else.
<li>The&nbsp; goal&nbsp; is &nbsp;to&nbsp; sort&nbsp; the &nbsp;stack &nbsp;with &nbsp;the &nbsp;lowest &nbsp;possible &nbsp;number&nbsp; of&nbsp; operations. &nbsp;During&nbsp;
the &nbsp;evaluation &nbsp;process, &nbsp;the &nbsp;number &nbsp;of &nbsp;instructions &nbsp;found &nbsp;by &nbsp;your&nbsp; program&nbsp; will&nbsp; be&nbsp;
compared&nbsp; against&nbsp; a &nbsp;limit: &nbsp;the &nbsp;maximum&nbsp; number&nbsp; of&nbsp; operations&nbsp; tolerated.&nbsp; If &nbsp;your&nbsp;
program&nbsp; either&nbsp; displays&nbsp; a &nbsp;longer&nbsp; list &nbsp;or &nbsp;if &nbsp;the &nbsp;numbers &nbsp;aren’t &nbsp;sorted &nbsp;properly, &nbsp;your&nbsp;
grade &nbsp;will&nbsp; be&nbsp; 0.
<li>If&nbsp; no &nbsp;parameters&nbsp; are &nbsp;specified, &nbsp;the &nbsp;program &nbsp;must &nbsp;not &nbsp;display&nbsp; anything &nbsp;and &nbsp;give&nbsp; the&nbsp;
prompt &nbsp;back.
<li>In &nbsp;case &nbsp;of &nbsp;error, &nbsp;it &nbsp;must &nbsp;display &nbsp;"Error" &nbsp;followed&nbsp; by&nbsp; a &nbsp;’\n’ &nbsp;on &nbsp;the &nbsp;standard &nbsp;error.
Errors &nbsp;include&nbsp; for &nbsp;example:&nbsp; some arguments aren’t integers,&nbsp; some&nbsp; arguments&nbsp; are&nbsp;
bigger&nbsp; than&nbsp; an &nbsp;integer &nbsp;and/or&nbsp; there &nbsp;are &nbsp;duplicates.
</ul>

<h2>The &nbsp;rules</h2>
<ul>
<li>You &nbsp;have &nbsp;2 &nbsp;stacks &nbsp;named &nbsp;a &nbsp;and &nbsp;b.
<li>At &nbsp;the&nbsp; beginning:
<ul>
<li>The &nbsp;stack&nbsp; a&nbsp; contains &nbsp;a &nbsp;random &nbsp;amount &nbsp;of&nbsp; negative&nbsp; and/or&nbsp; positive &nbsp;numbers&nbsp;
which&nbsp; cannot&nbsp; be &nbsp;duplicated.
<li>The&nbsp; stack &nbsp;b &nbsp;is &nbsp;empty.
</ul>
<li>The &nbsp;goal&nbsp; is &nbsp;to&nbsp; sort&nbsp; in &nbsp;ascending &nbsp;order &nbsp;numbers&nbsp; into &nbsp;stack &nbsp;a.&nbsp; To &nbsp;do &nbsp;so &nbsp;you &nbsp;have &nbsp;the&nbsp;
following&nbsp; operations &nbsp;at&nbsp; your&nbsp; disposal:
</ul>
<b>sa &nbsp;(swap &nbsp;a):</b> &nbsp;Swap &nbsp;the &nbsp;first&nbsp; 2&nbsp; elements&nbsp; at&nbsp; the &nbsp;top &nbsp;of&nbsp; stack &nbsp;a.<br>
Do &nbsp;nothing &nbsp;if&nbsp; there&nbsp; is &nbsp;only &nbsp;one&nbsp; or &nbsp;no &nbsp;elements.<br><br>
<b>sb &nbsp;(swap&nbsp; b):</b>&nbsp; Swap &nbsp;the &nbsp;first&nbsp; 2 &nbsp;elements &nbsp;at &nbsp;the&nbsp; top &nbsp;of &nbsp;stack&nbsp; b.<br>
Do &nbsp;nothing&nbsp; if &nbsp;there &nbsp;is &nbsp;only &nbsp;one &nbsp;or &nbsp;no &nbsp;elements.<br><br>
<b>ss: &nbsp;</b><b>sa</b> &nbsp;and &nbsp;<b>sb</b> &nbsp;at&nbsp; the&nbsp; same&nbsp; time.<br><br>
<b>pa &nbsp;(push &nbsp;a):</b>&nbsp; Take&nbsp; the &nbsp;first&nbsp; element &nbsp;at&nbsp; the&nbsp; top &nbsp;of&nbsp; b &nbsp;and&nbsp; put &nbsp;it&nbsp; at&nbsp; the&nbsp; top &nbsp;of&nbsp; a.<br>
Do&nbsp; nothing&nbsp; if &nbsp;b&nbsp; is&nbsp; empty.<br><br>
<b>pb&nbsp; (push&nbsp; b):</b>&nbsp; Take &nbsp;the&nbsp; first &nbsp;element&nbsp; at&nbsp; the&nbsp; top&nbsp; of&nbsp; a &nbsp;and &nbsp;put&nbsp; it&nbsp; at &nbsp;the &nbsp;top&nbsp; of&nbsp; b.<br>
Do &nbsp;nothing&nbsp; if&nbsp; a &nbsp;is &nbsp;empty.<br><br>
<b>ra&nbsp; (rotate &nbsp;a):</b>&nbsp; Shift &nbsp;up&nbsp; all&nbsp; elements &nbsp;of&nbsp; stack&nbsp; a &nbsp;by&nbsp; 1.<br>
The &nbsp;first&nbsp; element&nbsp; becomes &nbsp;the &nbsp;last&nbsp; one.<br><br>
<b>rb &nbsp;(rotate&nbsp; b):</b>&nbsp; Shift&nbsp; up &nbsp;all&nbsp; elements&nbsp; of &nbsp;stack&nbsp; b&nbsp; by &nbsp;1.<br>
The &nbsp;first &nbsp;element &nbsp;becomes&nbsp; the &nbsp;last &nbsp;one.<br><br>
<b>rr:&nbsp; </b><b>ra</b> and <b>rb</b> at the same time.<br><br>
<b>rra &nbsp;(reverse &nbsp;rotate &nbsp;a):</b>&nbsp; Shift&nbsp; down&nbsp; all&nbsp; elements &nbsp;of &nbsp;stack&nbsp; a &nbsp;by &nbsp;1.<br>
The &nbsp;last &nbsp;element &nbsp;becomes&nbsp; the &nbsp;first one.<br><br>
<b>rrb &nbsp;(reverse &nbsp;rotate&nbsp; b):</b> &nbsp;Shift &nbsp;down &nbsp;all&nbsp; elements &nbsp;of&nbsp; stack &nbsp;b&nbsp; by &nbsp;1.<br>
The &nbsp;last&nbsp; element&nbsp; becomes &nbsp;the &nbsp;first &nbsp;one.<br><br>
<b>rrr: &nbsp;</b><b>rra</b> &nbsp;and &nbsp;<b>rrb</b>&nbsp; at &nbsp;the&nbsp; same &nbsp;time.<br>

<br><br>

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more than 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.
