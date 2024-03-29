//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensSubPickerImageProviderProtocol-Protocol.h"

@class LSAPresetsComponent, NSArray, NSString;
@protocol SCLensCrashLoggerProtocol, SCLensSubPickerImageProviderDelegate;

@interface SCLensPresetImageProvider : NSObject <SCLensSubPickerImageProviderProtocol>
{
    LSAPresetsComponent *_presetsComponent;
    id <SCLensSubPickerImageProviderDelegate> _delegate;
    NSArray *_previewPaths;
    _Bool _presetsLoading;
    id <SCLensCrashLoggerProtocol> _lensCrashLogger;
}

- (void).cxx_destruct;
- (_Bool)canProcessMoreImages;
- (void)cancelImageLoadingWithId:(id)arg1;
- (void)cooldown;
- (id)delegate;
- (id)getPreviewImageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)imageCount;
- (id)imageIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfImageWithIdentifier:(id)arg1;
- (id)initWithPresetComponent:(id)arg1 lensCrashLogger:(id)arg2;
- (void)processMoreImagesIfPossibleWithSize:(struct CGSize)arg1 count:(unsigned long long)arg2;
- (void)processMoreImagesIfPossibleWithSize:(struct CGSize)arg1 count:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDelegate:(id)arg1;
- (void)warmupWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

