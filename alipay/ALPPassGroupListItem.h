//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OFNodeListItem.h"

@class NSArray, NSString;

@interface ALPPassGroupListItem : O2OFNodeListItem
{
    NSString *_type;
    NSString *_title;
    NSString *_subTitle;
    NSString *_guideInfo;
    NSString *_icon;
    NSString *_jumpUrl;
    NSArray *_passItemList;
    unsigned long long _unReadCount;
}

+ (id)nodeForItem:(id)arg1 Store:(id)arg2 Context:(id)arg3;
+ (id)itemWithDTO:(id)arg1;
@property(nonatomic) unsigned long long unReadCount; // @synthesize unReadCount=_unReadCount;
@property(copy, nonatomic) NSArray *passItemList; // @synthesize passItemList=_passItemList;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *guideInfo; // @synthesize guideInfo=_guideInfo;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateModel;
- (float)itemHeight;

@end

