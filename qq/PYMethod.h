//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PYMethod : NSObject
{
}

+ (_Bool)isMatchPinYinString:(id)arg1 matchString:(id)arg2 matchRange:(struct _NSRange *)arg3 withT9:(_Bool)arg4;
+ (_Bool)findPinyinCode:(id)arg1 pyCode:(struct _QQPinyinCode *)arg2 keyword:(id)arg3 pyIterator:(unsigned long long)arg4 withT9:(_Bool)arg5 matchEndPos:(unsigned long long *)arg6;
+ (id)toT9String:(id)arg1;
+ (struct _QQPinyinCode *)genPinyinCodeList:(id)arg1;
+ (const char *)getT9PinyinStringWithCode:(unsigned int)arg1;
+ (const char *)getPinyinStringWithCode:(unsigned int)arg1;
+ (unsigned long long)getPinyinCodeMapWithChar:(unsigned short)arg1 codeMap:(unsigned int *)arg2;
+ (const char *)getCommonPinyinWithChar:(unsigned short)arg1;
+ (unsigned long long)getFormattedPinyinCountWithChar:(unsigned short)arg1;
+ (id)getPinYin:(id)arg1;
+ (id)getPinYin:(id)arg1 rangeArry:(id)arg2;

@end

