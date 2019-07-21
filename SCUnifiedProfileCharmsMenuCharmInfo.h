//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCharmsOwner, SCCharmsUnifiedProfileLogParameters;

@interface SCUnifiedProfileCharmsMenuCharmInfo : NSObject <NSCopying>
{
    _Bool _removable;
    int _charmIdentifier;
    SCCharmsOwner *_charmOwner;
    NSString *_hideCharmPrompt;
    SCCharmsUnifiedProfileLogParameters *_charmsLogParameters;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int charmIdentifier; // @synthesize charmIdentifier=_charmIdentifier;
@property(readonly, copy, nonatomic) SCCharmsOwner *charmOwner; // @synthesize charmOwner=_charmOwner;
@property(readonly, copy, nonatomic) SCCharmsUnifiedProfileLogParameters *charmsLogParameters; // @synthesize charmsLogParameters=_charmsLogParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *hideCharmPrompt; // @synthesize hideCharmPrompt=_hideCharmPrompt;
- (id)initWithCharmOwner:(id)arg1 charmIdentifier:(int)arg2 removable:(_Bool)arg3 hideCharmPrompt:(id)arg4 charmsLogParameters:(id)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool removable; // @synthesize removable=_removable;

@end
