//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GIDatabaseHelper : NSObject
{
}

+ (id)execSelectWithStatement:(id)arg1 andDatabasePath:(id)arg2;
+ (_Bool)execSqlAndDBWithStatement:(id)arg1 andDatabasePath:(id)arg2;
+ (_Bool)execSqlWithStatement:(id)arg1 andDatabase:(struct sqlite3 *)arg2;
+ (_Bool)closeDatabase:(struct sqlite3 *)arg1;
+ (struct sqlite3 *)openDatabaseWithPath:(id)arg1;

@end

