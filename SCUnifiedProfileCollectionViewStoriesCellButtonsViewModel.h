//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel;

@interface SCUnifiedProfileCollectionViewStoriesCellButtonsViewModel : NSObject <NSCopying>
{
    SCActionModel *_saveButtonActionModel;
    SCActionModel *_settingsButtonActionModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSaveButtonActionModel:(id)arg1 settingsButtonActionModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *saveButtonActionModel; // @synthesize saveButtonActionModel=_saveButtonActionModel;
@property(readonly, copy, nonatomic) SCActionModel *settingsButtonActionModel; // @synthesize settingsButtonActionModel=_settingsButtonActionModel;

@end

