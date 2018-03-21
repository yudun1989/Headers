//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FMDatabase, FMDatabaseQueue, NSString;
@protocol AliTallyDBOpenHelperDelegate;

@interface AliTallyDBOpenHelper : NSObject
{
    id <AliTallyDBOpenHelperDelegate> _delegate;
    NSString *_dbPath;
    long long _version;
    FMDatabase *_db;
    FMDatabaseQueue *_dbQueue;
}

+ (_Bool)setVersion:(long long)arg1 forDB:(id)arg2;
+ (int)getVersionOfDB:(id)arg1;
@property(retain, nonatomic) FMDatabaseQueue *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *dbPath; // @synthesize dbPath=_dbPath;
@property(nonatomic) __weak id <AliTallyDBOpenHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)realOpen;
- (id)open;
- (_Bool)onUpgrade:(id)arg1 oldVersion:(int)arg2 newVersion:(int)arg3;
- (_Bool)onCreateDB:(id)arg1;
- (id)description;
- (void)close;
- (id)initWithDBPath:(id)arg1 version:(long long)arg2 delegate:(id)arg3;

@end

