//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AliDBResultSet, NSError;

@interface AliDBExecResult : NSObject
{
    AliDBResultSet *_resultSet;
    NSError *_error;
    long long _changeCount;
    unsigned long long _lastInsertRowId;
    id _extContext;
}

@property(retain, nonatomic) id extContext; // @synthesize extContext=_extContext;
@property(nonatomic) unsigned long long lastInsertRowId; // @synthesize lastInsertRowId=_lastInsertRowId;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AliDBResultSet *resultSet; // @synthesize resultSet=_resultSet;
- (void).cxx_destruct;

@end

