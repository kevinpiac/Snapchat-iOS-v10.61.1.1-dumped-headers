//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLSMCalloutView.h"

#import "MGLCalloutView-Protocol.h"

@class NSString, UIView;
@protocol MGLAnnotation, MGLCalloutViewDelegate;

@interface MGLCompactCalloutView : MGLSMCalloutView <MGLCalloutView>
{
    id <MGLAnnotation> _representedObject;
}

+ (id)platformCalloutView;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool dismissesAutomatically;
@property(readonly, nonatomic, getter=isAnchoredToAnnotation) _Bool anchoredToAnnotation;
@property(retain, nonatomic) id <MGLAnnotation> representedObject; // @synthesize representedObject=_representedObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MGLCalloutViewDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIView *leftAccessoryView;
@property(retain, nonatomic) UIView *rightAccessoryView;
@property(readonly) Class superclass;

@end

