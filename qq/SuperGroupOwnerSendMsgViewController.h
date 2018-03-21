//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/GAGrowingTextViewDelegate-Protocol.h>
#import <QQMainProject/QQTextFieldDelegate-Protocol.h>
#import <QQMainProject/UIAlertViewDelegate-Protocol.h>

@class NSString, QQWebViewController, SGOTextField, SuperGroupOwnerGroupListView, UILabel;

@interface SuperGroupOwnerSendMsgViewController : QQViewController <QQTextFieldDelegate, GAGrowingTextViewDelegate, UIAlertViewDelegate>
{
    SGOTextField *_textField;
    SuperGroupOwnerGroupListView *_groupListView;
    UILabel *_tipLabel;
    UILabel *_listViewTip;
    NSString *_textFromWeb;
    QQWebViewController *_webView;
}

@property(nonatomic) QQWebViewController *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *textFromWeb; // @synthesize textFromWeb=_textFromWeb;
- (_Bool)textView:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)QQGrowingTextView:(id)arg1 exceedMaxLength:(long long)arg2;
- (long long)maxInputLenghtInQQGrowingTextView:(id)arg1;
- (void)selectGroup;
- (id)trimmedText;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)leftButtonClick:(id)arg1;
- (void)onSendMsg:(id)arg1;
- (void)onSelectedGroupList:(id)arg1;
- (void)sendText:(id)arg1;
- (_Bool)growingTextViewInputReturnKey:(id)arg1;
- (_Bool)QQTextField:(id)arg1 didSendText:(id)arg2 showText:(id)arg3;
- (void)hideKeyBoard;
- (void)addGroupListView;
- (void)addTextField;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

