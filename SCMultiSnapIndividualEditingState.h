//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, SCCroppingState, SCFiltersState, SCSnapCommonLoggingParameters;

@interface SCMultiSnapIndividualEditingState : NSObject <NSCopying>
{
    _Bool _audioEnabled;
    NSMutableArray *_captions;
    NSMutableArray *_stickers;
    SCFiltersState *_filtersState;
    NSString *_attachmentURL;
    NSString *_audioFilterStyleId;
    NSMutableArray *_drawingStrokes;
    NSMutableDictionary *_drawingStrokeIdMap;
    long long _drawingSmoothingAlgorithm;
    SCCroppingState *_croppingState;
    SCCroppingState *_initialCroppingState;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    CDStruct_1b6d18a9 _timeBase;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(copy, nonatomic) NSString *audioFilterStyleId; // @synthesize audioFilterStyleId=_audioFilterStyleId;
@property(retain, nonatomic) NSMutableArray *captions; // @synthesize captions=_captions;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(nonatomic) long long drawingSmoothingAlgorithm; // @synthesize drawingSmoothingAlgorithm=_drawingSmoothingAlgorithm;
@property(retain, nonatomic) NSMutableDictionary *drawingStrokeIdMap; // @synthesize drawingStrokeIdMap=_drawingStrokeIdMap;
@property(retain, nonatomic) NSMutableArray *drawingStrokes; // @synthesize drawingStrokes=_drawingStrokes;
@property(retain, nonatomic) SCFiltersState *filtersState; // @synthesize filtersState=_filtersState;
- (_Bool)hasAnimatedOrTrackingContent;
- (_Bool)hasAudioVisualEdits;
- (_Bool)hasEdits;
- (id)initWithTimeBase:(CDStruct_1b6d18a9)arg1;
@property(retain, nonatomic) SCCroppingState *initialCroppingState; // @synthesize initialCroppingState=_initialCroppingState;
- (id)overlayStateWithOverlaySize:(struct CGSize)arg1 userSession:(id)arg2;
- (id)previewBlob;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(nonatomic) CDStruct_1b6d18a9 timeBase; // @synthesize timeBase=_timeBase;
- (id)translatedCaptionStates;
- (id)translatedStickerStates;
- (void)updateAvailableFiltersWithState:(id)arg1;
- (double)videoPlaybackRate;
- (id)visualFilterName;

@end

