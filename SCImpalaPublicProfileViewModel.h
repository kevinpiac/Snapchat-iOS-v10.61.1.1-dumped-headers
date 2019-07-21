//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublicProfileViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _previewMode;
    _Bool _animatedLensThumbnailsEnabled;
    _Bool _highlightsEnabled;
    NSString *_businessProfileId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool animatedLensThumbnailsEnabled; // @synthesize animatedLensThumbnailsEnabled=_animatedLensThumbnailsEnabled;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(nonatomic) _Bool highlightsEnabled; // @synthesize highlightsEnabled=_highlightsEnabled;
- (id)initWithBusinessProfileId:(id)arg1 entryInfo:(id)arg2 previewMode:(_Bool)arg3 animatedLensThumbnailsEnabled:(_Bool)arg4 highlightsEnabled:(_Bool)arg5;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
