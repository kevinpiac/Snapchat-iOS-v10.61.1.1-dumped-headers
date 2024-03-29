//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensEffectActivatorConfiguration-Protocol.h"

@class NSString, SCLensLaunchData;

@interface SCLensEffectActivatorConfiguration : NSObject <SCLensEffectActivatorConfiguration>
{
    _Bool _async;
    NSString *_filterOverlayImagePath;
    SCLensLaunchData *_launchConfiguration;
    NSString *_lensSessionId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool async; // @synthesize async=_async;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *filterOverlayImagePath; // @synthesize filterOverlayImagePath=_filterOverlayImagePath;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterOverlayImagePath:(id)arg1 launchConfiguration:(id)arg2 lensSessionId:(id)arg3 async:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCLensLaunchData *launchConfiguration; // @synthesize launchConfiguration=_launchConfiguration;
@property(readonly, copy, nonatomic) NSString *lensSessionId; // @synthesize lensSessionId=_lensSessionId;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

