//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NearbyInteractStateRequestProxy : NSObject
{
}

+ (id)reasonOfErrorCode:(unsigned long long)arg1;
+ (id)decodeNearbyInteracttReadReport:(CDStruct_7895f40e)arg1 errorCode:(int *)arg2;
+ (void)decodeNearbyInteractBoxInfoMsgWordFromWupData:(struct CPBMessageDecoder *)arg1 boxInfoModel:(id)arg2;
+ (id)decodeMsgType0x210SubMsgType0xd7:(const void *)arg1 DataLen:(int)arg2 subMsgType:(unsigned int)arg3;
+ (id)decodeNearbyInteractBoxInfoRuquest:(CDStruct_7895f40e)arg1 errorCode:(int *)arg2;
+ (id)encodeNearbyInteracttReadReport:(long long)arg1;
+ (id)encodeNearbyInteractBoxInfoRequest:(id)arg1;
+ (id)parseTribeSting:(id)arg1;

@end

