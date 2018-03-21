//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GMSBubbleEntityProviderDelegate-Protocol.h"
#import "GMSMapViewOverlay-Protocol.h"
#import "GMSMyLocationProviderDelegate-Protocol.h"
#import "GMSRendererDelegate-Protocol.h"
#import "GMSVectorMapViewDelegate-Protocol.h"

@class CAAnimation, CALayer, CLLocation, GMSBubbleEntityProvider, GMSCameraPosition, GMSDelegateForward, GMSGLTileProvider, GMSIndoorDisplay, GMSMapLayer, GMSMapStyle, GMSMarker, GMSMarkupProvider, GMSMyLocationProvider, GMSOffscreenEntitiesHostView, GMSProjection, GMSSDKEntityProvider, GMSServices, GMSStickersEntityProvider, GMSUISettings, GMSVectorMapView, GMSx_GMSLSpotlightDescription, NSMutableSet, NSString, UILongPressGestureRecognizer;
@protocol GMSMapViewAllDelegates, GMSMapViewDelegate, GMSTileServiceRegistry;

@interface GMSMapView : UIView <GMSVectorMapViewDelegate, GMSMyLocationProviderDelegate, GMSBubbleEntityProviderDelegate, GMSRendererDelegate, GMSMapViewOverlay>
{
    GMSDelegateForward<GMSMapViewAllDelegates> *_forward;
    GMSVectorMapView *_mapView;
    struct CGSize _targetSize;
    CAAnimation *_targetSizeAnimation;
    CALayer *_overlayLayer;
    GMSMyLocationProvider *_locationProvider;
    GMSGLTileProvider *_trafficOverlay;
    GMSSDKEntityProvider *_entityProvider;
    _Bool _duringGesture;
    _Bool _maskReportIdle;
    _Bool _isLabeling;
    _Bool _isLoadingTiles;
    _Bool _isRenderingTiles;
    _Bool _hasPendingOverlayChanges;
    _Bool _isSnapshotReady;
    struct set<GMSOverlay *, std::__1::less<GMSOverlay *>, std::__1::allocator<GMSOverlay *>> _overlays;
    struct map<unsigned long, GMSOverlay *, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, GMSOverlay *>>> _markupOverlays;
    struct map<GMSOverlay *, GMSOverlay *, std::__1::less<GMSOverlay *>, std::__1::allocator<std::__1::pair<GMSOverlay *const, GMSOverlay *>>> _overlayProxies;
    NSMutableSet *_tappableOverlays;
    NSMutableSet *_draggableMarkers;
    GMSOffscreenEntitiesHostView *_offscreenHost;
    GMSMarkupProvider *_markupProvider;
    GMSStickersEntityProvider *_stickersProvider;
    GMSBubbleEntityProvider *_bubbleProvider;
    _Bool _clearingMarkup;
    UIView *_currentInfoWindow;
    GMSMarker *_currentInfoWindowMarkerData;
    _Bool _currentInfoWindowWasCreatedInternally;
    struct map<GMSTileLayer *, GMSGLTileProvider *, std::__1::less<GMSTileLayer *>, std::__1::allocator<std::__1::pair<GMSTileLayer *const, GMSGLTileProvider *>>> _layerProviders;
    UILongPressGestureRecognizer *_dragRecognizer;
    GMSMarker *_draggedMarker;
    struct CGPoint _dragOffset;
    NSMutableSet *_overlayInfos;
    GMSx_GMSLSpotlightDescription *_spotlightDescription;
    GMSGLTileProvider *_searchLayerProvider;
    unsigned long long _effectiveAbsoluteFrameRate;
    id <GMSTileServiceRegistry> _currentTileServiceRegistry;
    _Bool _tileServiceRegistryWasForNormal;
    NSString *_styleForTileServiceRegistry;
    _Bool _trafficEnabled;
    BOOL _cameraState;
    int _preferredFrameRate;
    int _mapType;
    GMSServices *_services;
    GMSCameraPosition *_camera;
    GMSMarker *_selectedMarker;
    GMSMapStyle *_mapStyle;
    GMSIndoorDisplay *_indoorDisplay;
    GMSUISettings *_settings;
    CLLocation *_myLocation;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _uiInsets;
}

+ (unsigned long long)absoluteFrameRate:(int)arg1;
+ (_Bool)isValidFrameRate:(int)arg1;
+ (unsigned long long)maxFrameRate;
+ (id)removeEventForType:(int)arg1;
+ (id)addEventForType:(int)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)mapWithIndividualBackend:(struct CGRect)arg1 camera:(id)arg2;
+ (id)mapWithFrame:(struct CGRect)arg1 camera:(id)arg2;
+ (Class)layerClass;
@property(nonatomic) struct UIEdgeInsets uiInsets; // @synthesize uiInsets=_uiInsets;
@property(readonly, nonatomic) BOOL cameraState; // @synthesize cameraState=_cameraState;
@property(readonly, nonatomic) GMSDelegateForward<GMSMapViewAllDelegates> *forward; // @synthesize forward=_forward;
@property(retain, nonatomic) CLLocation *myLocation; // @synthesize myLocation=_myLocation;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) GMSUISettings *settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) GMSIndoorDisplay *indoorDisplay; // @synthesize indoorDisplay=_indoorDisplay;
@property(retain, nonatomic) GMSMapStyle *mapStyle; // @synthesize mapStyle=_mapStyle;
@property(nonatomic) int mapType; // @synthesize mapType=_mapType;
@property(nonatomic, getter=isTrafficEnabled) _Bool trafficEnabled; // @synthesize trafficEnabled=_trafficEnabled;
@property(retain, nonatomic) GMSMarker *selectedMarker; // @synthesize selectedMarker=_selectedMarker;
@property(copy, nonatomic) GMSCameraPosition *camera; // @synthesize camera=_camera;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setPreferredFrameRate:(int)arg1 reportsEvent:(_Bool)arg2;
- (void)raiseIdleAtCameraPosition:(id)arg1;
- (void)raiseWillMove:(_Bool)arg1;
- (void)raiseMapViewSnapshotReadyIfAppropriate;
- (void)markHasPendingOverlayChanges;
- (void)markSnapshotNotReady;
- (void)raiseMapViewDidFinishRenderingIfAppropriate;
- (void)raiseMapViewDidStartRenderingIfAppropriate;
- (float)zoomLevelForRect:(struct WrappedRectangle2D)arg1 mapSize:(struct CGSize)arg2;
- (id)infoWindowForMarker:(id)arg1;
- (void)notifyInfoWindowClosed;
- (void)refreshInfoWindow;
- (id)imageTileProviderForTileLayer:(id)arg1;
- (id)tileProviderForTileType:(id)arg1;
- (id)projectionForCamera:(id)arg1;
- (void)handleDragGesture:(id)arg1;
- (id)markerForStartDragAt:(struct CGPoint)arg1 camera:(const reffed_ptr_329922e5 *)arg2;
- (void)internalSetCamera:(id)arg1;
- (unsigned long long)effectiveAbsoluteFrameRate;
- (_Bool)isSnapshotReady;
- (void)rendererDidEndFrame:(id)arg1;
- (void)rendererWillBeginFrame:(id)arg1;
- (void)didTapBubble;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 deviceHeading:(double)arg3;
- (void)vectorMapView:(id)arg1 didCreateRenderer:(id)arg2;
- (id)vectorMapViewDeferredSharedCache:(id)arg1;
- (void)vectorMapViewCameraMovementDidEnd:(id)arg1 type:(long long)arg2 aggregatedMovementTypes:(long long)arg3;
- (void)vectorMapViewCameraMovementWillStart:(id)arg1 type:(long long)arg2 aggregatedMovementTypes:(long long)arg3;
- (void)vectorMapViewGesturesDidEnd:(id)arg1;
- (void)vectorMapViewGesturesWillStart:(id)arg1;
- (void)updateFrameRateToCurrentModeWithView:(id)arg1;
- (void)vectorMapView:(id)arg1 didUpdateFocusedBuilding:(id)arg2 fromBuilding:(id)arg3 activeLevel:(id)arg4;
- (void)vectorMapView:(id)arg1 didUpdateVisibleCopyrights:(id)arg2 imageryCopyrights:(id)arg3 copyrightYear:(int)arg4;
- (void)vectorMapView:(id)arg1 didTilt:(double)arg2;
- (void)vectorMapView:(id)arg1 didZoom:(float)arg2;
- (void)vectorMapView:(id)arg1 didRotate:(double)arg2;
- (void)vectorMapViewDidFinishLoadingTiles:(id)arg1;
- (void)vectorMapViewDidStartLoadingTiles:(id)arg1;
- (void)vectorMapViewLabelingStable:(id)arg1;
- (void)vectorMapView:(id)arg1 didShowNewLabels:(const set_d4c3d469 *)arg2;
- (void)vectorMapViewMapSettled:(id)arg1;
- (void)vectorMapView:(id)arg1 didLongPressCoordinate:(struct GMSCoordinate)arg2 longPressRadius:(double)arg3;
- (void)vectorMapView:(id)arg1 willTapAt:(struct CGPoint)arg2;
- (void)vectorMapView:(id)arg1 didTapCoordinate:(struct GMSCoordinate)arg2 tapRadius:(double)arg3;
- (void)vectorMapView:(id)arg1 didMoveFromCameraPosition:(const struct CameraPosition *)arg2 toCameraPosition:(const struct CameraPosition *)arg3 reason:(unsigned long long)arg4;
- (void)vectorMapView:(id)arg1 didTapCallout:(id)arg2;
- (void)vectorMapView:(id)arg1 didTapFeature:(id)arg2;
- (void)setPinnedLabelableIdentifier:(id)arg1;
- (void)updateSpotlightQuery:(id)arg1;
- (void)setSpotlightDescription:(id)arg1;
- (id)spotlightDescription;
- (void)updateCameraWithGMGEOMCamera:(id)arg1 animated:(_Bool)arg2;
- (_Bool)updateToCameraState:(BOOL)arg1;
- (void)updateWithMatchingCamera;
- (void)updateWithCamera:(id)arg1;
- (double)framesPerSecond;
- (void)removeOverlayInfo:(id)arg1;
- (void)addOverlayInfo:(id)arg1;
- (void)markupProvider:(id)arg1 itemID:(unsigned long long)arg2;
- (void)didTapOverlay:(id)arg1;
- (void)didTapMarker:(id)arg1;
- (id)locationProvider;
- (id)mapView;
@property(readonly, nonatomic) GMSServices *services; // @synthesize services=_services;
- (id)gmGEOMCamera;
- (void)displayLayer:(id)arg1;
- (void)refreshSettingsViewFrame;
@property(readonly, nonatomic) struct CGRect uiFrame;
- (_Bool)areEqualForRenderingPosition:(id)arg1 position:(id)arg2;
- (void)moveCamera:(id)arg1;
- (id)cameraForBounds:(id)arg1 insets:(struct UIEdgeInsets)arg2 maxZoomLevel:(float)arg3;
- (id)cameraForBounds:(id)arg1 insets:(struct UIEdgeInsets)arg2;
- (void)setMinZoom:(float)arg1 maxZoom:(float)arg2;
- (void)clear;
@property(nonatomic, getter=isIndoorEnabled) _Bool indoorEnabled;
@property(nonatomic, getter=isBuildingsEnabled) _Bool buildingsEnabled;
@property(readonly, nonatomic) float maxZoom;
@property(readonly, nonatomic) float minZoom;
- (void)updateMapStyleProvider;
- (void)updateTraffic;
@property(readonly, nonatomic) GMSProjection *projection;
@property(nonatomic) __weak id <GMSMapViewDelegate> delegate;
- (void)updateTileLayer:(id)arg1;
- (void)registerProxy:(id)arg1 forOverlay:(id)arg2;
- (void)updateOverlay:(id)arg1;
@property(nonatomic, getter=isMyLocationEnabled) _Bool myLocationEnabled;
- (void)stopRendering;
- (void)startRendering;
- (void)dealloc;
- (void)sharedInitWithServices:(id)arg1 camera:(id)arg2 forPlaces:(_Bool)arg3;
- (void)layoutSubviews;
@property(nonatomic) int preferredFrameRate; // @synthesize preferredFrameRate=_preferredFrameRate;
@property(nonatomic) _Bool accessibilityElementsHidden;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndividualBackend:(struct CGRect)arg1 camera:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 camera:(id)arg2;
- (id)initForPlacesWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)reportCameraEvent;
- (void)animateWithCameraUpdate:(id)arg1;
- (void)animateToViewingAngle:(double)arg1;
- (void)animateToBearing:(double)arg1;
- (void)animateToZoom:(float)arg1;
- (void)animateToLocation:(CDStruct_c3b9c2ee)arg1;
- (void)animateToCameraPosition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) GMSMapLayer *layer; // @dynamic layer;
@property(readonly) Class superclass;

@end

