//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCActionModel;

@interface SCUnifiedProfileStoriesListCellButtonsViewModel : NSObject <NSCopying>
{
    SCActionModel *_saveActionModel;
    SCActionModel *_deleteActionModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCActionModel *deleteActionModel; // @synthesize deleteActionModel=_deleteActionModel;
- (unsigned long long)hash;
- (id)initWithSaveActionModel:(id)arg1 deleteActionModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCActionModel *saveActionModel; // @synthesize saveActionModel=_saveActionModel;

@end

