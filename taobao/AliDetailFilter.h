//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AliDetailFilter : NSObject
{
    struct sqlite3 *_dataBase;
    _Bool _successfullyOpen;
}

+ (_Bool)filterWithString:(id)arg1 srcDic:(id)arg2;
+ (_Bool)executeFilterWithSQL:(id)arg1;
+ (id)shareInstance;
- (_Bool)executeFilterWithSQL:(id)arg1;
- (id)executeWithSQL:(id)arg1;
- (_Bool)isDataBaseOpen;
- (void)openDataBase;

@end

