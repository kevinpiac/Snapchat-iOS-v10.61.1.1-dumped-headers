//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSearchSpellCorrectionViewModel : NSObject <NSCopying>
{
    NSString *_spellCorrectedQueryText;
    NSString *_escapeHatchQueryText;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *escapeHatchQueryText; // @synthesize escapeHatchQueryText=_escapeHatchQueryText;
- (unsigned long long)hash;
- (id)initWithSpellCorrectedQueryText:(id)arg1 escapeHatchQueryText:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *spellCorrectedQueryText; // @synthesize spellCorrectedQueryText=_spellCorrectedQueryText;

@end

