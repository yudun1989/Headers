//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTEntityBase.h"

@class NSString;

@interface LiveTeam : TTEntityBase
{
    NSString *_icon;
    NSString *_name;
    long long _teamId;
    NSString *_url;
}

+ (id)keyMapping;
+ (id)persistentProperties;
+ (id)primaryKey;
+ (id)dbName;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) long long teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

