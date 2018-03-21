//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSORMObject.h"

@class NSString;

@interface KSStatsParameterStore : KSORMObject
{
    long long _flag;
    NSString *_data;
    NSString *_photoinfo;
    NSString *_exptag0;
    NSString *_exptag1;
}

+ (_Bool)fetchRemove:(id)arg1;
+ (_Bool)commitWithParameter:(id)arg1 flag:(long long)arg2;
+ (void)setupDatabase;
@property(retain, nonatomic) NSString *exptag1; // @synthesize exptag1=_exptag1;
@property(retain, nonatomic) NSString *exptag0; // @synthesize exptag0=_exptag0;
@property(retain, nonatomic) NSString *photoinfo; // @synthesize photoinfo=_photoinfo;
@property(retain, nonatomic) NSString *data; // @synthesize data=_data;
@property(nonatomic) long long flag; // @synthesize flag=_flag;
- (void).cxx_destruct;
- (id)customDatabaseName;

@end

