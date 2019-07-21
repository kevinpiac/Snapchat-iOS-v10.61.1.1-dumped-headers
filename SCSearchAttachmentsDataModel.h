//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SCSearchAttachmentsDataModel : NSObject <NSCopying, NSCoding>
{
    _Bool _isURLValidated;
    NSString *_title;
    NSURL *_attachmentURL;
    long long _cellType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 attachmentURL:(id)arg2 isURLValidated:(_Bool)arg3 cellType:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isURLValidated; // @synthesize isURLValidated=_isURLValidated;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

