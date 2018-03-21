//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <QQMainProject/UITextFieldDelegate-Protocol.h>

@class NSMutableArray, NSString, UIButton, UIColor, UIFont, UIImageView, UITextField;

@interface QZQuestionView : UIView <UITextFieldDelegate>
{
    UITextField *_textField;
    _Bool _showIcon;
    id _target;
    SEL _selector;
    NSMutableArray *_lines;
    _Bool _more;
    NSString *_question;
    int _xo;
    UIButton *_questionButton;
    UIImageView *_arrowView;
    UIFont *_font;
    UIColor *_titleColor;
    id _textFieldListener;
    SEL _listeningSelector;
    UIColor *_placeHolderColor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool more; // @dynamic more;
- (void)activeInputBar;
- (void)deactiveInputBar;
- (_Bool)isActiveInputBar;
- (void)clearInput;
- (void)sumbitAnswerQuestion;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)onListeningTextFiledInput:(id)arg1 andSelector:(SEL)arg2;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addEnterAnswerTarget:(id)arg1 selector:(SEL)arg2;
- (void)addClickTarget:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) _Bool showIcon; // @dynamic showIcon;
@property(retain, nonatomic) NSString *question; // @dynamic question;
- (void)createArrow;
- (void)reloadAppearance;
- (void)dealloc;
- (void)setTag:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTitleColor:(id)arg2 andHolderColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

