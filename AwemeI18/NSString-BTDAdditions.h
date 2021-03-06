//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (BTDAdditions)
+ (id)btd_safeEncodingDictForJSONObject:(id)arg1;
+ (id)btd_jsonWithDictionary:(id)arg1;
+ (id)btd_HMACMD5WithKey:(id)arg1 andData:(id)arg2;
+ (id)btd_generateUUID;
- (id)btd_dictionaryFromJSONString:(id *)arg1;
- (id)btd_JSONValue;
- (_Bool)btd_match:(id)arg1;
- (_Bool)btd_containsNumberOnly;
- (id)btd_urlStringByAddingComponentArray:(id)arg1;
- (id)btd_urlStringByAddingComponentString:(id)arg1;
- (id)btd_stringByMergingContinuousNewLine;
- (struct CGSize)btd_sizeWithFont:(id)arg1 width:(double)arg2 maxLine:(long long)arg3;
- (struct CGSize)btd_sizeWithFont:(id)arg1 width:(double)arg2;
- (double)btd_widthWithFont:(id)arg1 height:(double)arg2;
- (double)btd_heightWithFont:(id)arg1 width:(double)arg2;
- (double)btd_widthWithFontSize:(double)arg1;
- (double)btd_heightWithWidth:(double)arg1 fontSize:(double)arg2;
- (id)btd_stringByRemoveAllWhitespaceAndNewlineCharacters;
- (id)btd_stringByRemoveAllCharactersInSet:(id)arg1;
- (id)btd_dateWithDatePattern:(id)arg1;
- (id)btd_dateWithDateStyle:(unsigned long long)arg1 timeStyle:(unsigned long long)arg2;
- (id)btd_dateWithTimeStyle:(unsigned long long)arg1;
- (id)btd_dateWithDateStyle:(unsigned long long)arg1;
- (id)btd_SHA1String;
- (id)btd_SHA256String;
- (id)btd_MD5HashString;
@end

