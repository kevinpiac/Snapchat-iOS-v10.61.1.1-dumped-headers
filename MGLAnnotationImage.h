//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString, UIImage;
@protocol MGLAnnotationImageDelegate;

@interface MGLAnnotationImage : NSObject <NSSecureCoding>
{
    _Bool _enabled;
    UIImage *_image;
    NSString *_reuseIdentifier;
    NSString *_styleIconIdentifier;
    id <MGLAnnotationImageDelegate> _delegate;
}

+ (id)annotationImageWithImage:(id)arg1 reuseIdentifier:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MGLAnnotationImageDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(retain, nonatomic) NSString *styleIconIdentifier; // @synthesize styleIconIdentifier=_styleIconIdentifier;

@end

