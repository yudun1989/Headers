//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSClearcutClient, GMSLocationFixReporter, GMSPlacesServerClient, GMSx_GTMSessionFetcherService, NSDictionary, NSMapTable, NSURLSessionConfiguration;
@protocol GTMFetcherAuthorizationProtocol;

@interface GMSPlacesClient : NSObject
{
    GMSClearcutClient *_clearcutClient;
    NSDictionary *_rpcErrorMappings;
    NSMapTable *_photosFetcherRequestInterceptors;
    GMSPlacesServerClient *_backendClient;
    GMSLocationFixReporter *_locationFixReporter;
    CDUnknownBlockType _photoFetchTestBlock;
    GMSx_GTMSessionFetcherService *_photosFetcherService;
    NSURLSessionConfiguration *_testingPhotosURLConfiguration;
    double _testingPhotoFetchTimeout;
}

+ (void)resetForTest;
+ (id)APIKey;
+ (_Bool)provideAPIKey:(id)arg1;
+ (id)SDKVersion;
+ (id)openSourceLicenseInfo;
+ (id)replaceSharedClientWith:(id)arg1;
+ (id)sharedClient;
@property(nonatomic) double testingPhotoFetchTimeout; // @synthesize testingPhotoFetchTimeout=_testingPhotoFetchTimeout;
@property(retain, nonatomic) NSURLSessionConfiguration *testingPhotosURLConfiguration; // @synthesize testingPhotosURLConfiguration=_testingPhotosURLConfiguration;
@property(readonly, nonatomic) GMSx_GTMSessionFetcherService *photosFetcherService; // @synthesize photosFetcherService=_photosFetcherService;
@property(copy, nonatomic) CDUnknownBlockType photoFetchTestBlock; // @synthesize photoFetchTestBlock=_photoFetchTestBlock;
@property(retain, nonatomic) GMSLocationFixReporter *locationFixReporter; // @synthesize locationFixReporter=_locationFixReporter;
@property(retain, nonatomic) GMSPlacesServerClient *backendClient; // @synthesize backendClient=_backendClient;
- (void).cxx_destruct;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer;
- (void)executeInterceptorForFetcher:(id)arg1;
- (void)interceptRequestForFetcher:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)reasonForErrorCode:(long long)arg1;
- (long long)classifyUnderlyingError:(id)arg1;
- (id)placesErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
- (id)placesErrorWithCode:(long long)arg1;
- (id)placesErrorWithUnderlyingError:(id)arg1;
- (void)lookUpPlaceIDs:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)rerankPlaceEstimateWithBeacons:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)accountPlacePickerSessionWithCallback:(CDUnknownBlockType)arg1;
- (void)nearbyAlertRegionsForPlaces:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)reportDeviceAtPlaceWithID:(id)arg1;
- (void)autocompleteQuery:(id)arg1 bounds:(id)arg2 filter:(id)arg3 requestSource:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)autocompleteQuery:(id)arg1 bounds:(id)arg2 filter:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)autocompleteQuery:(id)arg1 bounds:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)currentPlaceWithLocation:(CDStruct_c3b9c2ee)arg1 callback:(CDUnknownBlockType)arg2;
- (void)currentPlaceWithLocation:(CDStruct_c3b9c2ee)arg1 requestSource:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)snapToLocation:(CDStruct_c3b9c2ee)arg1 requestSource:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)currentPlaceWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)currentPlaceWithCallback:(CDUnknownBlockType)arg1;
- (void)addPlace:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)loadPlacePhoto:(id)arg1 requestSource:(id)arg2 scale:(double)arg3 photoIndex:(long long)arg4 testConfiguration:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6;
- (void)loadPlacePhoto:(id)arg1 constrainedToSize:(struct CGSize)arg2 scale:(double)arg3 callback:(CDUnknownBlockType)arg4;
- (void)loadPlacePhoto:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)lookUpPhotosForPlaceID:(id)arg1 requestSource:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)lookUpPhotosForPlaceID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)lookUpPlaceID:(id)arg1 requestSource:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)lookUpPlaceID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)init;

@end

