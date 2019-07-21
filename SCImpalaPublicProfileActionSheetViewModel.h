//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSNumber, NSString, SCImpalaPublicProfileEntryInfo;

@interface SCImpalaPublicProfileActionSheetViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _previewMode;
    _Bool _lensCreatorPublicProfilesAbEnabled;
    _Bool _commerceStoreButtonAbEnabled;
    _Bool _forceShowDevCommerceStoreButton;
    _Bool _reportTileAbEnabled;
    NSString *_businessProfileId;
    SCImpalaPublicProfileEntryInfo *_entryInfo;
    NSNumber *_highlightsAbEnabled;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *businessProfileId; // @synthesize businessProfileId=_businessProfileId;
@property(nonatomic) _Bool commerceStoreButtonAbEnabled; // @synthesize commerceStoreButtonAbEnabled=_commerceStoreButtonAbEnabled;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) SCImpalaPublicProfileEntryInfo *entryInfo; // @synthesize entryInfo=_entryInfo;
@property(nonatomic) _Bool forceShowDevCommerceStoreButton; // @synthesize forceShowDevCommerceStoreButton=_forceShowDevCommerceStoreButton;
@property(retain, nonatomic) NSNumber *highlightsAbEnabled; // @synthesize highlightsAbEnabled=_highlightsAbEnabled;
- (id)initWithBusinessProfileId:(id)arg1 entryInfo:(id)arg2 previewMode:(_Bool)arg3 lensCreatorPublicProfilesAbEnabled:(_Bool)arg4 commerceStoreButtonAbEnabled:(_Bool)arg5 forceShowDevCommerceStoreButton:(_Bool)arg6 reportTileAbEnabled:(_Bool)arg7;
- (id)initWithBusinessProfileId:(id)arg1 entryInfo:(id)arg2 previewMode:(_Bool)arg3 lensCreatorPublicProfilesAbEnabled:(_Bool)arg4 commerceStoreButtonAbEnabled:(_Bool)arg5 forceShowDevCommerceStoreButton:(_Bool)arg6 reportTileAbEnabled:(_Bool)arg7 highlightsAbEnabled:(id)arg8;
@property(nonatomic) _Bool lensCreatorPublicProfilesAbEnabled; // @synthesize lensCreatorPublicProfilesAbEnabled=_lensCreatorPublicProfilesAbEnabled;
@property(nonatomic) _Bool previewMode; // @synthesize previewMode=_previewMode;
@property(nonatomic) _Bool reportTileAbEnabled; // @synthesize reportTileAbEnabled=_reportTileAbEnabled;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

