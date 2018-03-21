//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSGestureHandlerView.h"

#import "GMSAccessibilityContainer-Protocol.h"
#import "GMSEntityUIHandler-Protocol.h"
#import "GMSIOS10Compat_CAAnimationDelegate-Protocol.h"
#import "GMSIndoorFocusDelegate-Protocol.h"
#import "GMSIndoorTileObserverDelegate-Protocol.h"
#import "GMSMyLocationEntityProviderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GMSAnalytics, GMSBillingPointRecorder, GMSColoredOverlayEntityProvider, GMSCoreClientParameters, GMSIndoorFocusManager, GMSIndoorState, GMSIndoorTileObserver, GMSLabelsEntityProvider, GMSMyLocationEntityProvider, GMSNetworkMonitor, GMSPointsEntityProvider, GMSServerResourceManager, GMSStyleTableService, GMSTileRequestCoordinator, GMSTileType, GMSTilesEntityProvider, GMSVectorMapLayer, GMSVectorMapResources, GMSVectorMapSharedResourceCache, GMSVectorMapViewAccessibilityElement, GMSVectorMapViewEntityProviderResources, NSMutableArray, NSString, NSThread;
@protocol GMSEntityTappableUIItem, GMSTileServiceRegistry, GMSVectorMapViewDelegate;

@interface GMSVectorMapView : GMSGestureHandlerView <UIGestureRecognizerDelegate, GMSIndoorFocusDelegate, GMSIndoorTileObserverDelegate, GMSMyLocationEntityProviderDelegate, GMSAccessibilityContainer, GMSEntityUIHandler, GMSIOS10Compat_CAAnimationDelegate>
{
    id <GMSTileServiceRegistry> _tileServiceRegistry;
    GMSStyleTableService *_styleTableService;
    GMSTileRequestCoordinator *_tileRequestCoordinator;
    GMSServerResourceManager *_resourceManager;
    GMSNetworkMonitor *_networkMonitor;
    NSThread *_renderingThread;
    GMSLabelsEntityProvider *_labelsEntityProvider;
    GMSTilesEntityProvider *_tilesEntityProvider;
    GMSColoredOverlayEntityProvider *_dimmingEntityProvider;
    GMSPointsEntityProvider *_pointsEntityProvider;
    NSMutableArray *_entityProviders;
    GMSIndoorTileObserver *_indoorTileObserver;
    GMSIndoorFocusManager *_indoorFocusManager;
    struct reffed_ptr<gmscore::renderer::Behavior> _billingPointRecorderBehavior;
    GMSMyLocationEntityProvider *_myLocationEntityProvider;
    GMSCoreClientParameters *_clientParameters;
    GMSVectorMapSharedResourceCache *_sharedResourceCache;
    GMSVectorMapResources *_resources;
    reffed_ptr_933c1cb6 _textureAtlasesContext;
    GMSVectorMapViewEntityProviderResources *_entityProviderResources;
    float _startingZoomForPinch;
    double _startingAngleForTilt;
    double _startingAngleForRotate;
    int _overTiltDirection;
    struct CameraPosition {
        float zoom_;
        float look_ahead_;
        struct Point2D target_;
        double viewing_angle_radians_;
        double bearing_radians_;
    } _oldCameraPosition;
    unsigned long long _cameraChangeReason;
    GMSVectorMapViewAccessibilityElement *_mapAccessibilityElement;
    int _labelsPerformanceCounter;
    int _roadsPerformanceCounter;
    int _fetchOnlyRequiredBaseTilesPerformanceCounter;
    int _cameraMovementCounter;
    GMSVectorMapLayer *_mapLayer;
    NSMutableArray *_accessibilityItems;
    NSMutableArray *_visibleAccessibilityItems;
    struct TappableMapItemQueue _tappableUIItems;
    struct stack<GMSEntityTapClassStatusSet, std::__1::deque<GMSEntityTapClassStatusSet, std::__1::allocator<GMSEntityTapClassStatusSet>>> _tappableUIStatusStack;
    int _uiItemTransactionCount;
    id _accessibilityItemSelected;
    reffed_ptr_329922e5 _viewCamera;
    _Bool _viewCameraHasRealPosition;
    struct Point2D _anchorGroundLocation;
    struct CGPoint _anchorScreenLocation;
    _Bool _panInProjectedSpace;
    float _minZoomForCamera;
    float _lastAspectRatio;
    struct unique_ptr<(anonymous namespace)::ViewRenderTargetChangedSizeListener, std::__1::default_delete<(anonymous namespace)::ViewRenderTargetChangedSizeListener>> _viewRenderTargetChangedSizeListener;
    reffed_ptr_329922e5 _behaviorCamera;
    _Bool _shouldCallMapSettled;
    struct reffed_ptr<(anonymous namespace)::LabelingUpdateListener> _labelingUpdateListener;
    long long _cameraMovementTypeFlags;
    _Bool _isLoadingTiles;
    _Bool _cameraFollowsUser;
    _Bool _myLocationEnabled;
    _Bool _myLocationAvailable;
    _Bool _myLocationTapEnabled;
    _Bool _userLocationUnknownOrStale;
    _Bool _navigating;
    _Bool _overTiltEnabled;
    _Bool _accessibilityElementsEnabled;
    float _minZoom;
    float _maxZoom;
    id <GMSVectorMapViewDelegate> _delegate;
    double _userBearing;
    unsigned long long _activeCameraAnimationCount;
    GMSIndoorState *_indoorState;
    reffed_ptr_63f0ddf6 _calloutState;
    id <GMSEntityTappableUIItem> _selectedUIItem;
    GMSAnalytics *_analytics;
    GMSBillingPointRecorder *_recorder;
    struct CGRect _futureFrame;
}

+ (long long)rendererType;
+ (Class)layerClass;
+ (void)initialize;
@property(retain, nonatomic) GMSBillingPointRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) GMSAnalytics *analytics; // @synthesize analytics=_analytics;
@property(retain, nonatomic) id <GMSEntityTappableUIItem> selectedUIItem; // @synthesize selectedUIItem=_selectedUIItem;
@property(nonatomic, getter=areAccessibilityElementsEnabled) _Bool accessibilityElementsEnabled; // @synthesize accessibilityElementsEnabled=_accessibilityElementsEnabled;
@property(readonly, nonatomic) reffed_ptr_63f0ddf6 calloutState; // @synthesize calloutState=_calloutState;
@property(readonly, nonatomic) GMSIndoorState *indoorState; // @synthesize indoorState=_indoorState;
@property(readonly, nonatomic) unsigned long long activeCameraAnimationCount; // @synthesize activeCameraAnimationCount=_activeCameraAnimationCount;
@property(nonatomic) struct CGRect futureFrame; // @synthesize futureFrame=_futureFrame;
@property(nonatomic) double userBearing; // @synthesize userBearing=_userBearing;
@property(nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(nonatomic, getter=isOverTiltEnabled) _Bool overTiltEnabled; // @synthesize overTiltEnabled=_overTiltEnabled;
@property(nonatomic, getter=isNavigating) _Bool navigating; // @synthesize navigating=_navigating;
@property(nonatomic) _Bool userLocationUnknownOrStale; // @synthesize userLocationUnknownOrStale=_userLocationUnknownOrStale;
@property(nonatomic) _Bool myLocationTapEnabled; // @synthesize myLocationTapEnabled=_myLocationTapEnabled;
@property(nonatomic) _Bool myLocationAvailable; // @synthesize myLocationAvailable=_myLocationAvailable;
@property(nonatomic) _Bool myLocationEnabled; // @synthesize myLocationEnabled=_myLocationEnabled;
@property(nonatomic) _Bool cameraFollowsUser; // @synthesize cameraFollowsUser=_cameraFollowsUser;
@property(nonatomic) __weak id <GMSVectorMapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)disablePerformanceMode:(unsigned long long)arg1;
- (void)enablePerformanceMode:(unsigned long long)arg1;
- (void)didEndGesturesIsReset:(_Bool)arg1;
- (struct Point2D)mapPointFromWindowCoords:(struct CGPoint)arg1 valid:(_Bool *)arg2;
- (id)tappableUIItems;
- (struct WrappedFrustum2D)mapFrustrumForMapPointTap:(struct CGPoint)arg1;
- (void)viewRenderTargetChangedSize;
- (void)layerDidUpdateCameraPosition;
- (void)didDestroyRenderer;
- (void)willDestroyPhoenixRenderer:(id)arg1;
- (void)didCreatePhoenixRenderer:(id)arg1;
- (vector_ef47c132)phoenixRenderBins;
@property(readonly, nonatomic) struct GMSCoordinateRectangle viewport;
- (void)stopAndRemoveAllAnimations;
- (void)limitCameraZoomLevel;
- (void)clampToMaxViewingAngle;
- (void)networkWasFound:(id)arg1;
- (void)networkWasLost:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)clearTextureCaches;
- (void)waitUntilAllGlyphsLoaded;
- (void)didUpdateVisibleCopyrights:(id)arg1 imageryCopyrights:(id)arg2 copyrightYear:(int)arg3;
- (id)pointsEntityProvider;
- (id)labelsEntityProvider;
- (void)lastUpdateHadPendingTiles;
- (void)lastUpdateHadAllTiles;
- (id)renderingThread;
- (void)myLocationEntityProviderWasTapped:(id)arg1;
- (void)indoorState:(id)arg1 didChangeActiveLevel:(struct IndoorID)arg2 fromLevel:(struct IndoorID)arg3;
- (void)indoorTileObserverProcessedTileBatch:(id)arg1;
- (void)didUpdateFocusedBuilding:(id)arg1 fromBuilding:(id)arg2 activeLevel:(id)arg3;
- (struct CGRect)accessibilityFrameForPoints:(const vector_aa37bc82 *)arg1;
- (struct CGRect)accessibilityFrameForPoint:(const struct Point2D *)arg1;
- (struct CGRect)accessibilityFrameForRect:(const struct Rectangle2D *)arg1;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (_Bool)accessibilityScroll:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidLoseFocus:(id)arg1;
- (void)accessibilityElementDidBecomeFocused:(id)arg1;
- (_Bool)isAccessibilityElement;
- (void)buildVisibleAccessibilityItems;
- (void)commitAccessibleUIItemTransaction;
- (void)startAccessibleUIItemTransaction;
- (struct GMSEntityTapClassStatusSet)popTappableClassState;
- (void)pushTappableClassState:(const struct GMSEntityTapClassStatusSet *)arg1;
- (void)handleUIItemTransactionIfAppropriate;
- (void)replaceAccessibleUIItem:(id)arg1 withItem:(id)arg2;
- (void)removeAccessibleUIItem:(id)arg1;
- (void)addAccessibleUIItem:(id)arg1;
- (void)replaceTappableUIItem:(id)arg1 withItem:(id)arg2;
- (void)removeTappableUIItem:(id)arg1;
- (void)addTappableUIItem:(id)arg1;
- (void)didEndGestures;
- (void)willStartGestures;
- (void)resetGestureState;
- (void)didStartLongPressAt:(struct CGPoint)arg1;
- (id)calculateSelectedItemAt:(struct CGPoint)arg1;
- (void)didTapAt:(struct CGPoint)arg1;
- (void)handleZoomOut:(struct CGPoint)arg1;
- (void)handleZoomIn:(struct CGPoint)arg1;
- (struct CGPoint)createScreenPointFromLatitude:(double)arg1 longitude:(double)arg2;
- (void)didZoomStepAt:(struct CGPoint)arg1 zoomingIn:(_Bool)arg2;
- (void)didRotateRelative:(double)arg1;
- (void)willStartRotation;
- (void)didTiltRelative:(double)arg1;
- (void)willStartTilt;
- (void)didEndRotationDeceleration;
- (void)willStartRotationDeceleration;
- (void)didEndZoomDeceleration;
- (void)willStartZoomDeceleration;
- (void)didZoomRelative:(double)arg1;
- (void)willStartZoom;
- (void)panToMapPoint:(struct Point2D)arg1;
- (void)panToScreenPoint:(struct CGPoint)arg1;
- (void)didPanTo:(struct CGPoint)arg1;
- (void)willStartPanFrom:(struct CGPoint)arg1;
- (void)didEndPanDeceleration;
- (void)willStartPanDeceleration;
- (void)decrementCameraMovementWithType:(long long)arg1;
- (void)incrementCameraMovementWithType:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
@property(nonatomic) float cameraLookAhead;
- (void)setCameraViewingAngleUnclamped:(double)arg1;
@property(nonatomic) double cameraViewingAngle;
@property(nonatomic) float cameraZoomLevel;
@property(nonatomic) double cameraBearing;
@property(nonatomic) double cameraLongitude;
@property(nonatomic) double cameraLatitude;
@property(nonatomic) double userAccuracy;
@property(nonatomic) double userLongitude;
@property(nonatomic) double userLatitude;
- (unsigned long long)locationDotMode;
- (struct Vector4f)backgroundColorForMode:(int)arg1;
- (struct IndoorID)levelIDForCoordinate:(struct GMSCoordinate)arg1;
- (reffed_ptr_329922e5)viewCameraCopy;
- (void)disableRendering;
- (void)enableRenderingAndRedraw;
@property(nonatomic, getter=isLabelingEnabled) _Bool labelingEnabled;
- (void)forceSendBillingPoint;
- (unsigned long long)totalMissingVisibleTiles;
- (unsigned long long)totalVisibleTiles;
- (void)removeTileObserver:(id)arg1;
- (void)addTileObserver:(id)arg1;
- (void)removeOverlayTileProvider:(id)arg1;
- (void)addOverlayTileProvider:(id)arg1;
- (void)setTileServiceRegistry:(id)arg1;
- (void)setMapImageMode:(int)arg1 vectorMode:(int)arg2;
@property(readonly, nonatomic) int mapVectorMode;
@property(readonly, nonatomic) int mapImageMode;
@property(readonly, nonatomic) struct CameraPosition cameraPosition;
- (struct CameraPosition)cameraPositionForRect:(const struct Rectangle2D *)arg1 inViewRect:(const struct CGRect *)arg2;
@property(nonatomic, getter=isIndoorEnabled) _Bool indoorEnabled;
@property(nonatomic, getter=shouldMakePOIsTappable) _Bool makePOIsTappable;
@property(nonatomic, getter=isBuildingsEnabled) _Bool buildingsEnabled;
@property(nonatomic, getter=isNightMode) _Bool nightMode;
- (void)updateMyLocationMode;
- (void)setUserPosition:(const struct Point2D *)arg1 userBearing:(double)arg2 accuracy:(double)arg3;
- (void)removeEntityProvider:(id)arg1;
- (void)addEntityProvider:(id)arg1;
@property(readonly, nonatomic) GMSTileType *psmTileType;
@property(readonly, nonatomic) GMSTileType *baseTileType;
- (float)minZoomForCamera;
- (struct GMSCoordinate)repositionCoordinate:(struct GMSCoordinate)arg1 forNewFrame:(struct CGRect)arg2 oldFrame:(struct CGRect)arg3 contentsGravity:(id)arg4;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 tileServiceRegistry:(id)arg2 styleTableService:(id)arg3 tileRequestCoordinator:(id)arg4 clientParameters:(id)arg5 resourceManager:(id)arg6 sharedResourceCache:(id)arg7 networkMonitor:(id)arg8 displayLink:(id)arg9 offscreenSink:(id)arg10 gestureRecognizerSource:(id)arg11 flags:(unsigned long long)arg12;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

