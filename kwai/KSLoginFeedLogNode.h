//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSLoginLogNode.h"

@class NSNumber, NSString;

@interface KSLoginFeedLogNode : KSLoginLogNode
{
    int _type;
    NSString *_feedID;
    NSNumber *_authorID;
    NSNumber *_indexInList;
    NSString *_llsid;
    NSString *_expTag;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *expTag; // @synthesize expTag=_expTag;
@property(retain, nonatomic) NSString *llsid; // @synthesize llsid=_llsid;
@property(retain, nonatomic) NSNumber *indexInList; // @synthesize indexInList=_indexInList;
@property(retain, nonatomic) NSNumber *authorID; // @synthesize authorID=_authorID;
@property(retain, nonatomic) NSString *feedID; // @synthesize feedID=_feedID;
- (void).cxx_destruct;
- (void)_fillPhotoPackage:(id)arg1 withNode:(id)arg2;
- (void)fillContentPackage:(id)arg1;

@end
