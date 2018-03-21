//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DiscussGroupStorage : NSObject
{
    long long _uin;
    NSString *encryptKey;
}

@property(retain, nonatomic) NSString *encryptKey; // @synthesize encryptKey;
@property(nonatomic) long long uin; // @synthesize uin=_uin;
- (void)deleteFavoriteDiscussGroupListFile;
- (void)deleteDiscussGroupListFile;
- (void)deleteDiscussMemberData:(long long)arg1;
- (id)loadDiscussMemberList:(long long)arg1;
- (id)loadDiscussGroupList;
- (_Bool)createDiscussGroupFolder;
- (id)initWithCurrentUin:(long long)arg1;
- (void)dealloc;
- (id)getDiscussMemberListPathEnc:(long long)arg1;
- (id)getDiscussMemberListPath:(long long)arg1;
- (id)getFavoriteGroupListPath;
- (id)getGroupListPath;
- (id)getGroupPath;
- (_Bool)hasFile:(id)arg1;

@end

