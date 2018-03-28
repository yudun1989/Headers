//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TTThemedAlertTextActionModel : NSObject
{
    long long _actionType;
    long long _textElementTag;
    CDUnknownBlockType _textFieldActionBlock;
    CDUnknownBlockType _textViewActionBlock;
}

@property(nonatomic) __weak CDUnknownBlockType textViewActionBlock; // @synthesize textViewActionBlock=_textViewActionBlock;
@property(nonatomic) __weak CDUnknownBlockType textFieldActionBlock; // @synthesize textFieldActionBlock=_textFieldActionBlock;
@property(nonatomic) long long textElementTag; // @synthesize textElementTag=_textElementTag;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)initWithTextActionType:(long long)arg1 textFieldActionBlock:(CDUnknownBlockType)arg2 textViewActionBlock:(CDUnknownBlockType)arg3 withElementTag:(long long)arg4;

@end

