//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APGHotWordsItem : NSObject
{
    NSString *_searchKey;
    NSString *_showName;
    NSString *_objectId;
    NSString *_tagUrl;
    NSString *_tagType;
    NSString *_ruleId;
    NSString *_bucketId;
}

@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(retain, nonatomic) NSString *tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) NSString *tagUrl; // @synthesize tagUrl=_tagUrl;
@property(retain, nonatomic) NSString *objectId; // @synthesize objectId=_objectId;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *searchKey; // @synthesize searchKey=_searchKey;
- (void).cxx_destruct;
- (_Bool)isEqualToItem:(id)arg1;

@end

