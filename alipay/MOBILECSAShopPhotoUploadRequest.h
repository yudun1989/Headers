//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MOBILECSABaseRpcRequest.h"

@class NSArray, NSString;

@interface MOBILECSAShopPhotoUploadRequest : MOBILECSABaseRpcRequest
{
    NSString *_shopId;
    NSString *_goodsId;
    NSString *_pId;
    NSArray *_imageUrls;
}

+ (Class)imageUrlsElementClass;
@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(retain, nonatomic) NSString *pId; // @synthesize pId=_pId;
@property(retain, nonatomic) NSString *goodsId; // @synthesize goodsId=_goodsId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

