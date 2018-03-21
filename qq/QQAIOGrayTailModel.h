//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface QQAIOGrayTailModel : NSObject
{
    _Bool _canTailClick;
    NSString *_tailStr;
    UIFont *_tailFont;
    UIColor *_tailStrColor;
    double _addHeightForTail;
    CDUnknownBlockType _clickAction;
}

+ (struct CGSize)sizeForTailModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(nonatomic) double addHeightForTail; // @synthesize addHeightForTail=_addHeightForTail;
@property(nonatomic) _Bool canTailClick; // @synthesize canTailClick=_canTailClick;
@property(retain, nonatomic) UIColor *tailStrColor; // @synthesize tailStrColor=_tailStrColor;
@property(retain, nonatomic) UIFont *tailFont; // @synthesize tailFont=_tailFont;
@property(retain, nonatomic) NSString *tailStr; // @synthesize tailStr=_tailStr;
- (void).cxx_destruct;
- (id)init;

@end

