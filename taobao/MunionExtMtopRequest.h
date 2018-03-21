//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CpmDataListModel, MunionExtModel, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, TBSDKMTOPServer;

@interface MunionExtMtopRequest : NSObject
{
    TBSDKMTOPServer *_request;
    CDUnknownBlockType _requestStartedBlock;
    CDUnknownBlockType _requestSuccessedBlock;
    CDUnknownBlockType _requestFailedBlock;
    long long _requestCnt;
    NSDictionary *_userDic;
    MunionExtModel *_bannerModel;
    NSMutableDictionary *_responseData;
    CpmDataListModel *_cpmDataModel;
    NSString *_nick;
    NSMutableArray *_imageDataArr;
    NSMutableArray *_imageRequestArr;
    long long _imageSuccessCnt;
    long long _imageCutType;
    NSString *_serviceName;
    struct CGSize _bannerSize;
}

+ (id)mtopApiVersionWithType:(long long)arg1;
+ (id)mtopApiWithType:(long long)arg1;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(nonatomic) long long imageCutType; // @synthesize imageCutType=_imageCutType;
@property(nonatomic) struct CGSize bannerSize; // @synthesize bannerSize=_bannerSize;
@property(nonatomic) long long imageSuccessCnt; // @synthesize imageSuccessCnt=_imageSuccessCnt;
@property(retain, nonatomic) NSMutableArray *imageRequestArr; // @synthesize imageRequestArr=_imageRequestArr;
@property(retain, nonatomic) NSMutableArray *imageDataArr; // @synthesize imageDataArr=_imageDataArr;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) CpmDataListModel *cpmDataModel; // @synthesize cpmDataModel=_cpmDataModel;
@property(retain, nonatomic) NSMutableDictionary *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) MunionExtModel *bannerModel; // @synthesize bannerModel=_bannerModel;
@property(retain, nonatomic) NSDictionary *userDic; // @synthesize userDic=_userDic;
@property(nonatomic) long long requestCnt; // @synthesize requestCnt=_requestCnt;
@property(copy, nonatomic) CDUnknownBlockType requestFailedBlock; // @synthesize requestFailedBlock=_requestFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType requestSuccessedBlock; // @synthesize requestSuccessedBlock=_requestSuccessedBlock;
@property(copy, nonatomic) CDUnknownBlockType requestStartedBlock; // @synthesize requestStartedBlock=_requestStartedBlock;
@property(retain, nonatomic) TBSDKMTOPServer *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)timeOfJoinImage:(long long)arg1;
- (void)notJoinImageError:(id)arg1;
- (void)joinImageError:(id)arg1;
- (void)addImageRequest:(id)arg1;
- (void)cancleImageRequest;
- (void)imageDownLoadError:(id)arg1 imageDataModel:(id)arg2;
- (void)processSingleImageDownloadSuccess:(id)arg1;
- (id)dataModelMapToDic;
- (void)joinImage:(id)arg1 imageDataArr:(id)arg2;
- (void)imageOfBanner:(id)arg1 imageDataArr:(id)arg2;
- (id)resolveAdData;
- (void)callbackAfterAllImageRequestsSuccess;
- (void)downloadAllImages;
- (void)preprocessBeforeDownloadImages;
- (id)imageUrl:(id)arg1 joinType:(long long)arg2 belongBanner:(id)arg3 imageSize:(struct CGSize)arg4 imagePoint:(struct CGPoint)arg5;
- (id)noJoinImageResolve:(id)arg1 index:(long long)arg2;
- (id)joinImageResolve:(id)arg1 index:(long long)arg2;
- (void)resolveMtopResposeDataToModel:(id)arg1 index:(long long)arg2;
- (void)downloadImagesForCPM;
- (void)resolveBannerDic;
- (_Bool)networkError:(id)arg1;
- (void)retryAfterFail;
- (void)setupRequestParm;
- (void)sendCpmRequest:(id)arg1 bannerDic:(id)arg2 serviceName:(id)arg3 startBlock:(CDUnknownBlockType)arg4 successedBlock:(CDUnknownBlockType)arg5 failedBlock:(CDUnknownBlockType)arg6;
- (void)clearDelegatesAndCancel;
- (void)initProperty;
- (id)init;

@end

