//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCCommerceAttachmentDataModel;

@interface SCCommerceAttachmentActionDataModel : NSObject <NSCopying>
{
    unsigned long long _index;
    SCCommerceAttachmentDataModel *_dataModel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCCommerceAttachmentDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)initWithIndex:(unsigned long long)arg1 dataModel:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
