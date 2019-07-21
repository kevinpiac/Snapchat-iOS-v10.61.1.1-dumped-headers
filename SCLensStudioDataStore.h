//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSData, NSString, SCLens, SCLensStudioPairManager, UIImage;
@protocol SCLensUserProvider;

@interface SCLensStudioDataStore : NSObject <SCUserSessionScoped, SCTraceEnabled, NSSecureCoding>
{
    SCLens *_studioLens;
    UIImage *_studioLensIcon;
    NSData *_studioSyncCertificate;
    SCLensStudioPairManager *_lensStudioPairManager;
    id <SCLensUserProvider> _lensUserProvider;
}

+ (id)path;
+ (void)removeSavedState;
+ (id)restoreSavedState;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (_Bool)_isStudioLensContentValid;
- (_Bool)_isStudioLensExpired;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (void)getStudioSyncCredentialsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestoredLensStudioDataStore:(id)arg1 lensUserProvider:(id)arg2 lensStudioPairManager:(id)arg3;
- (void)invalidate;
@property(retain, nonatomic) SCLensStudioPairManager *lensStudioPairManager; // @synthesize lensStudioPairManager=_lensStudioPairManager;
@property(retain, nonatomic) id <SCLensUserProvider> lensUserProvider; // @synthesize lensUserProvider=_lensUserProvider;
- (void)removeStudioLensContent;
- (void)saveState;
- (void)setStudioLens:(id)arg1 studioLensIcon:(id)arg2;
@property(readonly, nonatomic) SCLens *studioLens;
@property(readonly, nonatomic) UIImage *studioLensIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

