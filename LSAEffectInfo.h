//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface LSAEffectInfo : NSObject
{
    _Bool _isThirdParty;
    NSString *_effectId;
    NSString *_contentPath;
    NSData *_launchMetadata;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *contentPath; // @synthesize contentPath=_contentPath;
@property(readonly, copy) NSString *effectId; // @synthesize effectId=_effectId;
- (id)initWithEffectId:(id)arg1;
- (id)initWithEffectId:(id)arg1 contentPath:(id)arg2;
- (id)initWithEffectId:(id)arg1 contentPath:(id)arg2 isThirdParty:(_Bool)arg3 launchMetadata:(id)arg4;
@property(readonly) _Bool isThirdParty; // @synthesize isThirdParty=_isThirdParty;
@property(readonly) NSData *launchMetadata; // @synthesize launchMetadata=_launchMetadata;

@end
