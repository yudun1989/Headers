//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TBAddressBookMessageFloatContainerView, TBAddressBookMessageInputView;

@interface TBAddressBookMessageContainerView : UIView
{
    _Bool _present;
    _Bool _enableForMessageInputView;
    _Bool _keyBoardPresent;
    _Bool _animation;
    _Bool _messageAvatarsAnimation;
    TBAddressBookMessageFloatContainerView *_messageFloatContainerView;
    TBAddressBookMessageInputView *_messageInputView;
}

+ (id)messageContainerView;
@property(retain, nonatomic) TBAddressBookMessageInputView *messageInputView; // @synthesize messageInputView=_messageInputView;
@property(retain, nonatomic) TBAddressBookMessageFloatContainerView *messageFloatContainerView; // @synthesize messageFloatContainerView=_messageFloatContainerView;
@property(nonatomic, getter=isMessageAvatarsAnimation) _Bool messageAvatarsAnimation; // @synthesize messageAvatarsAnimation=_messageAvatarsAnimation;
@property(nonatomic, getter=isAnimation) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic, getter=isKeyBoardPresent) _Bool keyBoardPresent; // @synthesize keyBoardPresent=_keyBoardPresent;
@property(nonatomic, getter=isEnableForMessageInputView) _Bool enableForMessageInputView; // @synthesize enableForMessageInputView=_enableForMessageInputView;
@property(nonatomic, getter=isPresent) _Bool present; // @synthesize present=_present;
- (void).cxx_destruct;
- (void)setMessageInputViewText:(id)arg1;
- (void)setMessageChangeNameViewText:(id)arg1;
- (void)clearText;
- (id)inputViewText;
- (void)changeMessageInputViewToHeight:(double)arg1;
- (void)hideMessageChangeNameView;
- (void)showMessageChangeNameView;
- (void)hideMessageFloatContainerView;
- (void)showMessageFloatContainerView;
- (void)unenableMessageInputView;
- (void)enableMessageInputView;
- (void)removeMessageAvatar:(id)arg1;
- (void)addMessageAvatar:(id)arg1;
- (void)reloadMessageAvatarsViewWithMessageAvatarModels:(id)arg1;
- (void)updateMessageShareName:(id)arg1;
- (void)hideKeyBoardIfNeed;
- (_Bool)messageChangeNameInputViewViewIsFirstResponder;
- (_Bool)messageContainerViewIsFirstResponder;
- (_Bool)messageFloatContainerViewIsPresent;
- (_Bool)messageFloatContainerViewIsAnimation;
- (double)heightForMessageFloatContainerViewOriginView;
- (double)heightForMessageInputViewOriginTextView;
- (double)heightForMessageInputViewOriginView;
- (double)heightForMessageInputView;
- (double)heightForMessageAvatarsView;
- (struct CGRect)rectForMessageInputView;
- (void)resetView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

