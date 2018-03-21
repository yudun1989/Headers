//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class NSString;

@interface WXTextInputView : UITextField
{
    _Bool _deleteWords;
    NSString *_editWords;
    struct UIEdgeInsets _border;
    struct UIEdgeInsets _padding;
}

@property(retain, nonatomic) NSString *editWords; // @synthesize editWords=_editWords;
@property(nonatomic) _Bool deleteWords; // @synthesize deleteWords=_deleteWords;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets border; // @synthesize border=_border;
- (void).cxx_destruct;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (id)init;

@end

