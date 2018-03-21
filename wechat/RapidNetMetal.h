//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNNBufferCache, CNNImage, CNNPipeLineManager, NSMutableArray, NSString, RapidNetCPU;
@protocol MTLDevice, MTLLibrary;

@interface RapidNetMetal : NSObject
{
    vector_e0f2bd7e _dataPaddingWidths;
    vector_e0f2bd7e _dataPaddingHeights;
    struct CNNDimension _netInputDimention;
    RapidNetCPU *_netCpu;
    id <MTLDevice> _device;
    id <MTLLibrary> _library;
    CNNBufferCache *_bufferCache;
    CNNPipeLineManager *_pipeLineManager;
    NSString *_protoFile;
    NSString *_modelFile;
    NSMutableArray *_layers;
    CNNImage *_inputImage;
}

@property(retain, nonatomic) CNNImage *inputImage; // @synthesize inputImage=_inputImage;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(readonly, nonatomic) NSString *modelFile; // @synthesize modelFile=_modelFile;
@property(readonly, nonatomic) NSString *protoFile; // @synthesize protoFile=_protoFile;
@property(retain, nonatomic) CNNPipeLineManager *pipeLineManager; // @synthesize pipeLineManager=_pipeLineManager;
@property(retain, nonatomic) CNNBufferCache *bufferCache; // @synthesize bufferCache=_bufferCache;
@property(retain, nonatomic) id <MTLLibrary> library; // @synthesize library=_library;
@property(retain, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
@property(retain, nonatomic) RapidNetCPU *netCpu; // @synthesize netCpu=_netCpu;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)constructNetworkWith:(id)arg1;
- (id)forwardWithCNNImage:(id)arg1 commandBuffer:(id)arg2;
- (id)forwardWithTexture:(id)arg1 commandBuffer:(id)arg2;
- (void)getOrigLayerPadingWidth:(vector_e0f2bd7e *)arg1 padHeights:(vector_e0f2bd7e *)arg2 fromNet:(id)arg3;
- (void)preloadForDataDimension:(struct CNNDimension)arg1;
- (void)preloadForDataDimension:(struct CNNDimension)arg1 netInputDimension:(struct CNNDimension)arg2;
- (struct CNNDimension)getOutputDataDimension;
- (struct CNNDimension)getNetDataDimension;
- (id)initWithDevice:(id)arg1 library:(id)arg2;

@end

