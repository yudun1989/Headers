//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface QQShareGroupListBizModel : QQModel
{
    _Bool _isEnd;
    NSArray *_list;
    NSString *_nextCookie;
}

@property(retain, nonatomic) NSString *nextCookie; // @synthesize nextCookie=_nextCookie;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
- (void)dealloc;

@end

