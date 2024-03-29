//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCharmsUnifiedProfileLogParameters, SCUnifiedProfileCharmsCardViewCellContentViewModel, SCUnifiedProfileCharmsCardViewCellViewModelSupplementaryInfo, SCUnifiedProfileCharmsMenuCharmInfo;

@interface SCUnifiedProfileCharmsCardViewCellViewModel : NSObject <NSCopying>
{
    _Bool _unviewed;
    NSString *_displayName;
    SCUnifiedProfileCharmsCardViewCellContentViewModel *_contentViewModel;
    NSString *_charmDescription;
    SCUnifiedProfileCharmsCardViewCellViewModelSupplementaryInfo *_supplementaryInfo;
    SCUnifiedProfileCharmsMenuCharmInfo *_charmInfo;
    SCCharmsUnifiedProfileLogParameters *_charmsLogParameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *charmDescription; // @synthesize charmDescription=_charmDescription;
@property(readonly, copy, nonatomic) SCUnifiedProfileCharmsMenuCharmInfo *charmInfo; // @synthesize charmInfo=_charmInfo;
@property(readonly, copy, nonatomic) SCCharmsUnifiedProfileLogParameters *charmsLogParameters; // @synthesize charmsLogParameters=_charmsLogParameters;
@property(readonly, copy, nonatomic) SCUnifiedProfileCharmsCardViewCellContentViewModel *contentViewModel; // @synthesize contentViewModel=_contentViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)arg1 contentViewModel:(id)arg2 charmDescription:(id)arg3 unviewed:(_Bool)arg4 supplementaryInfo:(id)arg5 charmInfo:(id)arg6 charmsLogParameters:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCUnifiedProfileCharmsCardViewCellViewModelSupplementaryInfo *supplementaryInfo; // @synthesize supplementaryInfo=_supplementaryInfo;
@property(readonly, nonatomic) _Bool unviewed; // @synthesize unviewed=_unviewed;

@end

