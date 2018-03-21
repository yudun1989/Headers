//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQViewController.h>

#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class MSFImageView, NSString, UIImage, UIImageView, UITextField;
@protocol QQValidCodeControllerDelegate;

@interface QQVaildCodeController : QQViewController <UITextFieldDelegate>
{
    NSString *_url;
    MSFImageView *_imageView;
    UIImageView *defaulImageView;
    UITextField *_textValidCode;
    _Bool isPresent;
    UIImage *_codeImg;
    int sessinID;
    _Bool dismiss;
    id controlObject;
    _Bool _isReFetch;
    id <QQValidCodeControllerDelegate> _delegate;
    _Bool _fobiddenBack;
    NSString *_msgText;
    _Bool _isFirstShow;
    _Bool _dismiss;
    _Bool _forbiddenBack;
    id _controlObject;
}

@property(nonatomic) _Bool forbiddenBack; // @synthesize forbiddenBack=_forbiddenBack;
@property(nonatomic) id <QQValidCodeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id controlObject; // @synthesize controlObject;
@property(nonatomic) _Bool dismiss; // @synthesize dismiss;
@property(readonly, nonatomic) _Bool isPresent; // @synthesize isPresent;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)dealloc;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)onLoginAfterRegState:(id)arg1;
- (void)FetchNewPic;
- (void)actionVeryfyDone;
- (void)sendAction;
- (void)ActionCancel;
- (void)showError;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)clearText;
- (int)getSessionID;
- (void)setSessionID:(int)arg1;
- (void)setCodeImage:(id)arg1;
- (void)loadView;
- (id)initWithUseStateL:(id)arg1 msgText:(id)arg2 delegate:(id)arg3;
- (id)initWithUseStateL:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

