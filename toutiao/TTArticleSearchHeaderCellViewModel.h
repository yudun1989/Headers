//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTArticleSearchHeaderCellViewModel : NSObject
{
    _Bool _closing;
    NSString *_title;
    NSString *_titleIcon;
    NSString *_actionText;
    NSString *_actionIcon;
    CDUnknownBlockType _titleBlock;
    CDUnknownBlockType _actionBlock;
}

@property(nonatomic, getter=isClosing) _Bool closing; // @synthesize closing=_closing;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) CDUnknownBlockType titleBlock; // @synthesize titleBlock=_titleBlock;
@property(copy, nonatomic) NSString *actionIcon; // @synthesize actionIcon=_actionIcon;
@property(copy, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(copy, nonatomic) NSString *titleIcon; // @synthesize titleIcon=_titleIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

