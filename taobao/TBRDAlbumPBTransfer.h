//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRDRatePBTransfer.h"

@class NSDictionary, NSString;

@interface TBRDAlbumPBTransfer : TBRDRatePBTransfer
{
    id localData;
    NSDictionary *requestParams;
    NSString *pageName;
    NSDictionary *pageTrackParams;
    NSDictionary *commonTrackParams;
}

- (void)setCommonTrackParams:(id)arg1;
- (id)commonTrackParams;
- (void)setPageTrackParams:(id)arg1;
- (id)pageTrackParams;
- (void)setPageName:(id)arg1;
- (id)pageName;
- (void)setRequestParams:(id)arg1;
- (id)requestParams;
- (void)setLocalData:(id)arg1;
- (id)localData;
- (void).cxx_destruct;
- (void)transferRequestData:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)generatePhotoBrowseModelWithAlbumObj:(id)arg1 element:(id)arg2;
- (void)requestDataWithParams:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)transferLocalDataComplete:(CDUnknownBlockType)arg1;

@end

